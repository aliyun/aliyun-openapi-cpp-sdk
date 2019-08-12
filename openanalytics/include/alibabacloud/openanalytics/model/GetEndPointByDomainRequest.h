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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINREQUEST_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_EXPORT GetEndPointByDomainRequest : public RpcServiceRequest
			{

			public:
				GetEndPointByDomainRequest();
				~GetEndPointByDomainRequest();

				bool getSecurity_transport()const;
				void setSecurity_transport(bool security_transport);
				std::string getRegionID()const;
				void setRegionID(const std::string& regionID);
				std::string getRequestId()const;
				void setRequestId(const std::string& requestId);
				long getCallerParentId()const;
				void setCallerParentId(long callerParentId);
				long getCallerBid()const;
				void setCallerBid(long callerBid);
				std::string getCallerType()const;
				void setCallerType(const std::string& callerType);
				bool getAk_mfa_present()const;
				void setAk_mfa_present(bool ak_mfa_present);
				long getCallerUid()const;
				void setCallerUid(long callerUid);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				long getUserID()const;
				void setUserID(long userID);
				std::string getDomainURL()const;
				void setDomainURL(const std::string& domainURL);

            private:
				bool security_transport_;
				std::string regionID_;
				std::string requestId_;
				long callerParentId_;
				long callerBid_;
				std::string callerType_;
				bool ak_mfa_present_;
				long callerUid_;
				std::string accessKeyId_;
				long userID_;
				std::string domainURL_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINREQUEST_H_