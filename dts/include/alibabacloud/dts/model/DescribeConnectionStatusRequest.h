/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBECONNECTIONSTATUSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBECONNECTIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeConnectionStatusRequest : public RpcServiceRequest
			{

			public:
				DescribeConnectionStatusRequest();
				~DescribeConnectionStatusRequest();

				std::string getSourceEndpointRegion()const;
				void setSourceEndpointRegion(const std::string& sourceEndpointRegion);
				std::string getSourceEndpointArchitecture()const;
				void setSourceEndpointArchitecture(const std::string& sourceEndpointArchitecture);
				std::string getDestinationEndpointInstanceType()const;
				void setDestinationEndpointInstanceType(const std::string& destinationEndpointInstanceType);
				std::string getSourceEndpointInstanceID()const;
				void setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID);
				std::string getSourceEndpointUserName()const;
				void setSourceEndpointUserName(const std::string& sourceEndpointUserName);
				std::string getSourceEndpointDatabaseName()const;
				void setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName);
				std::string getDestinationEndpointRegion()const;
				void setDestinationEndpointRegion(const std::string& destinationEndpointRegion);
				std::string getSourceEndpointIP()const;
				void setSourceEndpointIP(const std::string& sourceEndpointIP);
				std::string getDestinationEndpointUserName()const;
				void setDestinationEndpointUserName(const std::string& destinationEndpointUserName);
				std::string getDestinationEndpointArchitecture()const;
				void setDestinationEndpointArchitecture(const std::string& destinationEndpointArchitecture);
				std::string getDestinationEndpointOracleSID()const;
				void setDestinationEndpointOracleSID(const std::string& destinationEndpointOracleSID);
				std::string getDestinationEndpointEngineName()const;
				void setDestinationEndpointEngineName(const std::string& destinationEndpointEngineName);
				std::string getDestinationEndpointInstanceID()const;
				void setDestinationEndpointInstanceID(const std::string& destinationEndpointInstanceID);
				std::string getDestinationEndpointPort()const;
				void setDestinationEndpointPort(const std::string& destinationEndpointPort);
				std::string getSourceEndpointPassword()const;
				void setSourceEndpointPassword(const std::string& sourceEndpointPassword);
				std::string getSourceEndpointPort()const;
				void setSourceEndpointPort(const std::string& sourceEndpointPort);
				std::string getDestinationEndpointIP()const;
				void setDestinationEndpointIP(const std::string& destinationEndpointIP);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getSourceEndpointOracleSID()const;
				void setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID);
				std::string getDestinationEndpointDatabaseName()const;
				void setDestinationEndpointDatabaseName(const std::string& destinationEndpointDatabaseName);
				std::string getDestinationEndpointPassword()const;
				void setDestinationEndpointPassword(const std::string& destinationEndpointPassword);
				std::string getSourceEndpointEngineName()const;
				void setSourceEndpointEngineName(const std::string& sourceEndpointEngineName);

            private:
				std::string sourceEndpointRegion_;
				std::string sourceEndpointArchitecture_;
				std::string destinationEndpointInstanceType_;
				std::string sourceEndpointInstanceID_;
				std::string sourceEndpointUserName_;
				std::string sourceEndpointDatabaseName_;
				std::string destinationEndpointRegion_;
				std::string sourceEndpointIP_;
				std::string destinationEndpointUserName_;
				std::string destinationEndpointArchitecture_;
				std::string destinationEndpointOracleSID_;
				std::string destinationEndpointEngineName_;
				std::string destinationEndpointInstanceID_;
				std::string destinationEndpointPort_;
				std::string sourceEndpointPassword_;
				std::string sourceEndpointPort_;
				std::string destinationEndpointIP_;
				std::string sourceEndpointInstanceType_;
				std::string sourceEndpointOracleSID_;
				std::string destinationEndpointDatabaseName_;
				std::string destinationEndpointPassword_;
				std::string sourceEndpointEngineName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBECONNECTIONSTATUSREQUEST_H_