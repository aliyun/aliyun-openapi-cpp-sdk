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

#ifndef ALIBABACLOUD_DTS_MODEL_CREATEDTSINSTANCEREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_CREATEDTSINSTANCEREQUEST_H_

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
			class ALIBABACLOUD_DTS_EXPORT CreateDtsInstanceRequest : public RpcServiceRequest
			{

			public:
				CreateDtsInstanceRequest();
				~CreateDtsInstanceRequest();

				bool getAutoStart()const;
				void setAutoStart(bool autoStart);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getInstanceClass()const;
				void setInstanceClass(const std::string& instanceClass);
				int getDatabaseCount()const;
				void setDatabaseCount(int databaseCount);
				std::string getJobId()const;
				void setJobId(const std::string& jobId);
				std::string getDestinationRegion()const;
				void setDestinationRegion(const std::string& destinationRegion);
				std::string getPeriod()const;
				void setPeriod(const std::string& period);
				std::string getDestinationEndpointEngineName()const;
				void setDestinationEndpointEngineName(const std::string& destinationEndpointEngineName);
				int getQuantity()const;
				void setQuantity(int quantity);
				bool getAutoPay()const;
				void setAutoPay(bool autoPay);
				int getUsedTime()const;
				void setUsedTime(int usedTime);
				std::string getSyncArchitecture()const;
				void setSyncArchitecture(const std::string& syncArchitecture);
				std::string getPayType()const;
				void setPayType(const std::string& payType);
				std::string getSourceRegion()const;
				void setSourceRegion(const std::string& sourceRegion);
				std::string getSourceEndpointEngineName()const;
				void setSourceEndpointEngineName(const std::string& sourceEndpointEngineName);

            private:
				bool autoStart_;
				std::string type_;
				std::string instanceClass_;
				int databaseCount_;
				std::string jobId_;
				std::string destinationRegion_;
				std::string period_;
				std::string destinationEndpointEngineName_;
				int quantity_;
				bool autoPay_;
				int usedTime_;
				std::string syncArchitecture_;
				std::string payType_;
				std::string sourceRegion_;
				std::string sourceEndpointEngineName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_CREATEDTSINSTANCEREQUEST_H_