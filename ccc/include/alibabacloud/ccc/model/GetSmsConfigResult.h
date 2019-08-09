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

#ifndef ALIBABACLOUD_CCC_MODEL_GETSMSCONFIGRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_GETSMSCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT GetSmsConfigResult : public ServiceResult
			{
			public:
				struct SmsConfig
				{
					std::string templateCode;
					std::string gmtCreate;
					std::string description;
					std::string extra;
					std::string instance;
					std::string gmtModified;
					long id;
					std::string signName;
					int scenario;
					std::string name;
				};


				GetSmsConfigResult();
				explicit GetSmsConfigResult(const std::string &payload);
				~GetSmsConfigResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<SmsConfig> getSmsConfigs()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<SmsConfig> smsConfigs_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_GETSMSCONFIGRESULT_H_