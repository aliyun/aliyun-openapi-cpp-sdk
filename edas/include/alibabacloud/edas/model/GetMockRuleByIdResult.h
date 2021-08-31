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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYIDRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYIDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT GetMockRuleByIdResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct SpringCloudMockItem
					{
						std::string path;
						std::string serviceName;
						std::string exceptionClassName;
						std::string value;
						std::string executeCondition;
						std::string method;
						std::string oper;
					};
					struct DubboMockItem
					{
						std::string path;
						std::string paramTypes;
						std::string group;
						std::string exceptionMessage;
						std::string serviceName;
						std::string version;
						std::string exceptionClassName;
						std::string value;
						std::string executeCondition;
						std::string methodName;
						std::string oper;
					};
					std::string accountId;
					std::string consumerAppId;
					std::string extraJson;
					std::string source;
					std::string name;
					std::string consumerAppName;
					std::string providerAppId;
					std::string providerAppName;
					std::vector<SpringCloudMockItem> scMockItems;
					bool enable;
					std::string region;
					std::vector<DubboMockItem> dubboMockItems;
					long id;
				};


				GetMockRuleByIdResult();
				explicit GetMockRuleByIdResult(const std::string &payload);
				~GetMockRuleByIdResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETMOCKRULEBYIDRESULT_H_