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

#ifndef ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERRESULT_H_
#define ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mseap/MseapExport.h>

namespace AlibabaCloud
{
	namespace Mseap
	{
		namespace Model
		{
			class ALIBABACLOUD_MSEAP_EXPORT SendNotificationForPartnerResult : public ServiceResult
			{
			public:


				SendNotificationForPartnerResult();
				explicit SendNotificationForPartnerResult(const std::string &payload);
				~SendNotificationForPartnerResult();
				std::string getErrorMsg()const;
				bool getSuccess()const;
				std::string getMsgId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorMsg_;
				bool success_;
				std::string msgId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSEAP_MODEL_SENDNOTIFICATIONFORPARTNERRESULT_H_