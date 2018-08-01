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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListCallDetailRecordsRequest : public RpcServiceRequest
			{

			public:
				ListCallDetailRecordsRequest();
				~ListCallDetailRecordsRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getContactDisposition()const;
				void setContactDisposition(const std::string& contactDisposition);
				std::string getContactType()const;
				void setContactType(const std::string& contactType);
				std::string getCriteria()const;
				void setCriteria(const std::string& criteria);
				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getOrderBy()const;
				void setOrderBy(const std::string& orderBy);
				long getStopTime()const;
				void setStopTime(long stopTime);
				long getStartTime()const;
				void setStartTime(long startTime);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				bool getWithRecording()const;
				void setWithRecording(bool withRecording);

            private:
				std::string instanceId_;
				std::string contactDisposition_;
				std::string contactType_;
				std::string criteria_;
				std::string phoneNumber_;
				int pageSize_;
				std::string orderBy_;
				long stopTime_;
				long startTime_;
				int pageNumber_;
				std::string accessKeyId_;
				bool withRecording_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTCALLDETAILRECORDSREQUEST_H_