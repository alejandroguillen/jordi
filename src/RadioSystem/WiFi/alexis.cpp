/*
 * alexis.cpp
 *
 *  Created on: 12/dec/2014
 *      Author: Alejandro Guillén
 */

#include "alexis.h"
#include <boost/bind.hpp>
#include "NodeManager/NodeManager.h"

alexis::alexis(boost::asio::io_service io_service, tcp::resolver::query query, NodeManager* nm):
new_connection(new Connection(io_service,
		connection_manager))
{
	
	new_connection->setNodeManager(node_manager);
	tcp::resolver resolver(io_service);
	tcp::endpoint endpoint = *resolver.resolve(query);
	tcp::resolver::iterator endpoint_iterator = resolver.resolve(query);

	std::cout << "connecting to Camera 1..." << std::endl;
	boost::asio::async_connect(new_connection->socket(), endpoint_iterator,
			boost::bind(&alexis::handleConnect, this,
					boost::asio::placeholders::error, endpoint_iterator, new_connection));
			

}
