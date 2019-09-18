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

#ifndef ALIBABACLOUD_PVTZ_MODEL_UPDATEZONEREMARKREQUEST_H_
#define ALIBABACLOUD_PVTZ_MODEL_UPDATEZONEREMARKREQUEST_H_

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
			class ALIBABACLOUD_PVTZ_EXPORT UpdateZoneRemarkRequest : public RpcServiceRequest
			{

			public:
				UpdateZoneRemarkRequest();
				~UpdateZoneRemarkRequest();

				std::string getRemark()const;
				void setRemark(const std::string& remark);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string remark_;
				std::string userClientIp_;
				std::string zoneId_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_UPDATEZONEREMARKREQUEST_H_