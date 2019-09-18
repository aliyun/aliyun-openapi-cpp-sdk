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

#ifndef ALIBABACLOUD_PVTZ_MODEL_UPDATEZONERECORDREQUEST_H_
#define ALIBABACLOUD_PVTZ_MODEL_UPDATEZONERECORDREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT UpdateZoneRecordRequest : public RpcServiceRequest
			{

			public:
				UpdateZoneRecordRequest();
				~UpdateZoneRecordRequest();

				std::string getRr()const;
				void setRr(const std::string& rr);
				std::string getType()const;
				void setType(const std::string& type);
				int getPriority()const;
				void setPriority(int priority);
				int getTtl()const;
				void setTtl(int ttl);
				long getRecordId()const;
				void setRecordId(long recordId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getValue()const;
				void setValue(const std::string& value);

            private:
				std::string rr_;
				std::string type_;
				int priority_;
				int ttl_;
				long recordId_;
				std::string userClientIp_;
				std::string lang_;
				std::string value_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_UPDATEZONERECORDREQUEST_H_