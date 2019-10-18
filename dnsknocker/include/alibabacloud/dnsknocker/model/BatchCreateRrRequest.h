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

#ifndef ALIBABACLOUD_DNSKNOCKER_MODEL_BATCHCREATERRREQUEST_H_
#define ALIBABACLOUD_DNSKNOCKER_MODEL_BATCHCREATERRREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dnsknocker/DnsKnockerExport.h>

namespace AlibabaCloud
{
	namespace DnsKnocker
	{
		namespace Model
		{
			class ALIBABACLOUD_DNSKNOCKER_EXPORT BatchCreateRrRequest : public RpcServiceRequest
			{

			public:
				BatchCreateRrRequest();
				~BatchCreateRrRequest();

				std::string getAccessID()const;
				void setAccessID(const std::string& accessID);
				std::string getAccessSecret()const;
				void setAccessSecret(const std::string& accessSecret);
				std::string getResourceRecords()const;
				void setResourceRecords(const std::string& resourceRecords);
				std::string getLine()const;
				void setLine(const std::string& line);
				std::string getZoneName()const;
				void setZoneName(const std::string& zoneName);
				std::string getTransactionId()const;
				void setTransactionId(const std::string& transactionId);
				std::string getGroup()const;
				void setGroup(const std::string& group);

            private:
				std::string accessID_;
				std::string accessSecret_;
				std::string resourceRecords_;
				std::string line_;
				std::string zoneName_;
				std::string transactionId_;
				std::string group_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DNSKNOCKER_MODEL_BATCHCREATERRREQUEST_H_