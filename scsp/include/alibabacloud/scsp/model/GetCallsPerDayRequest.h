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

#ifndef ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT GetCallsPerDayRequest : public RpcServiceRequest
			{

			public:
				GetCallsPerDayRequest();
				~GetCallsPerDayRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getDataIdStart()const;
				void setDataIdStart(const std::string& dataIdStart);
				std::string getDataIdEnd()const;
				void setDataIdEnd(const std::string& dataIdEnd);
				std::string getDataId()const;
				void setDataId(const std::string& dataId);
				std::string getHourId()const;
				void setHourId(const std::string& hourId);
				std::string getMinuteId()const;
				void setMinuteId(const std::string& minuteId);
				std::string getPhoneNumbers()const;
				void setPhoneNumbers(const std::string& phoneNumbers);
				std::string getHavePhoneNumbers()const;
				void setHavePhoneNumbers(const std::string& havePhoneNumbers);
				long getPageNo()const;
				void setPageNo(long pageNo);
				long getPageSize()const;
				void setPageSize(long pageSize);

            private:
				std::string instanceId_;
				std::string dataIdStart_;
				std::string dataIdEnd_;
				std::string dataId_;
				std::string hourId_;
				std::string minuteId_;
				std::string phoneNumbers_;
				std::string havePhoneNumbers_;
				long pageNo_;
				long pageSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_GETCALLSPERDAYREQUEST_H_