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

#ifndef ALIBABACLOUD_DNSKNOCKER_MODEL_DELETERESOURCERECORDREQUEST_H_
#define ALIBABACLOUD_DNSKNOCKER_MODEL_DELETERESOURCERECORDREQUEST_H_

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
			class ALIBABACLOUD_DNSKNOCKER_EXPORT DeleteResourceRecordRequest : public RpcServiceRequest
			{

			public:
				DeleteResourceRecordRequest();
				~DeleteResourceRecordRequest();

				std::string getAccessID()const;
				void setAccessID(const std::string& accessID);
				std::string getRRTTL()const;
				void setRRTTL(const std::string& rRTTL);
				std::string getAccessSecret()const;
				void setAccessSecret(const std::string& accessSecret);
				std::string getRRLine()const;
				void setRRLine(const std::string& rRLine);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getRRValue()const;
				void setRRValue(const std::string& rRValue);
				std::string getZoneName()const;
				void setZoneName(const std::string& zoneName);
				std::string getTransactionId()const;
				void setTransactionId(const std::string& transactionId);
				std::string getGroup()const;
				void setGroup(const std::string& group);
				std::string getRRType()const;
				void setRRType(const std::string& rRType);

            private:
				std::string accessID_;
				std::string rRTTL_;
				std::string accessSecret_;
				std::string rRLine_;
				std::string domainName_;
				std::string rRValue_;
				std::string zoneName_;
				std::string transactionId_;
				std::string group_;
				std::string rRType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DNSKNOCKER_MODEL_DELETERESOURCERECORDREQUEST_H_