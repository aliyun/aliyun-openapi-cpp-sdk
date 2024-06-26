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

#ifndef ALIBABACLOUD_IDAAS_DORAEMON_MODEL_SERVICEINVOKERESULT_H_
#define ALIBABACLOUD_IDAAS_DORAEMON_MODEL_SERVICEINVOKERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/idaas-doraemon/Idaas_doraemonExport.h>

namespace AlibabaCloud
{
	namespace Idaas_doraemon
	{
		namespace Model
		{
			class ALIBABACLOUD_IDAAS_DORAEMON_EXPORT ServiceInvokeResult : public ServiceResult
			{
			public:


				ServiceInvokeResult();
				explicit ServiceInvokeResult(const std::string &payload);
				~ServiceInvokeResult();
				std::string getIdToken()const;
				std::string getMessage()const;
				std::string getEventId()const;
				std::string getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string idToken_;
				std::string message_;
				std::string eventId_;
				std::string data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IDAAS_DORAEMON_MODEL_SERVICEINVOKERESULT_H_