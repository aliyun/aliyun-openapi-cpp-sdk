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

#ifndef ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_DTS_EXPORT ConfigureSubscriptionInstanceRequest : public RpcServiceRequest
			{

			public:
				ConfigureSubscriptionInstanceRequest();
				~ConfigureSubscriptionInstanceRequest();

				std::string getSourceEndpointInstanceID()const;
				void setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID);
				std::string getSourceEndpointOracleSID()const;
				void setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID);
				std::string getSourceEndpointIP()const;
				void setSourceEndpointIP(const std::string& sourceEndpointIP);
				bool getSubscriptionDataTypeDML()const;
				void setSubscriptionDataTypeDML(bool subscriptionDataTypeDML);
				std::string getSourceEndpointInstanceType()const;
				void setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getSubscriptionObject()const;
				void setSubscriptionObject(const std::string& subscriptionObject);
				std::string getSubscriptionInstanceVSwitchId()const;
				void setSubscriptionInstanceVSwitchId(const std::string& subscriptionInstanceVSwitchId);
				std::string getSourceEndpointUserName()const;
				void setSourceEndpointUserName(const std::string& sourceEndpointUserName);
				std::string getSourceEndpointDatabaseName()const;
				void setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName);
				std::string getSourceEndpointPort()const;
				void setSourceEndpointPort(const std::string& sourceEndpointPort);
				std::string getSourceEndpointOwnerID()const;
				void setSourceEndpointOwnerID(const std::string& sourceEndpointOwnerID);
				std::string getSubscriptionInstanceVPCId()const;
				void setSubscriptionInstanceVPCId(const std::string& subscriptionInstanceVPCId);
				std::string getSubscriptionInstanceNetworkType()const;
				void setSubscriptionInstanceNetworkType(const std::string& subscriptionInstanceNetworkType);
				std::string getSubscriptionInstanceId()const;
				void setSubscriptionInstanceId(const std::string& subscriptionInstanceId);
				std::string getSourceEndpointRole()const;
				void setSourceEndpointRole(const std::string& sourceEndpointRole);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				bool getSubscriptionDataTypeDDL()const;
				void setSubscriptionDataTypeDDL(bool subscriptionDataTypeDDL);
				std::string getSourceEndpointPassword()const;
				void setSourceEndpointPassword(const std::string& sourceEndpointPassword);
				std::string getSubscriptionInstanceName()const;
				void setSubscriptionInstanceName(const std::string& subscriptionInstanceName);

            private:
				std::string sourceEndpointInstanceID_;
				std::string sourceEndpointOracleSID_;
				std::string sourceEndpointIP_;
				bool subscriptionDataTypeDML_;
				std::string sourceEndpointInstanceType_;
				std::string accessKeyId_;
				std::string accountId_;
				std::string regionId_;
				std::string subscriptionObject_;
				std::string subscriptionInstanceVSwitchId_;
				std::string sourceEndpointUserName_;
				std::string sourceEndpointDatabaseName_;
				std::string sourceEndpointPort_;
				std::string sourceEndpointOwnerID_;
				std::string subscriptionInstanceVPCId_;
				std::string subscriptionInstanceNetworkType_;
				std::string subscriptionInstanceId_;
				std::string sourceEndpointRole_;
				std::string ownerId_;
				bool subscriptionDataTypeDDL_;
				std::string sourceEndpointPassword_;
				std::string subscriptionInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_CONFIGURESUBSCRIPTIONINSTANCEREQUEST_H_