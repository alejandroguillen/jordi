/*
 * alexis.h
 *
 *  Created on: 12/dec/2014
 *      Author: Alejandro Guillén
 */

#ifndef ALEXIS_H_
#define ALEXIS_H_

#include <boost/asio.hpp>
#include <boost/bind.hpp>
#include <string>
#include "ConnectionManager.h"
#include "Connection.h"
#include "Messages/Header.h"
#include "alexis.h"

using boost::asio::ip::tcp;

class alexis{

public:
	alexis(boost::asio::io_service io_service,boost::asio::ip::tcp::resolver::query, NodeManager* nm);
	void startReceiver();

	std::set<Connection*> getWiFiConnections();

private:

	boost::asio::io_service io_service;
	tcp::acceptor acceptor;
	ConnectionManager connection_manager;
	Connection* new_connection;

	NodeManager* node_manager;
	//boost::thread r_thread;

};


#endif /* ALEXIS_H_ */
