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

#ifndef ALIBABACLOUD_EDAS_MODEL_GETENVTRAFFICCONTROLRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_GETENVTRAFFICCONTROLRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT GetEnvTrafficControlResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Metadata
					{
						std::string _namespace;
						std::string labels;
						std::string name;
					};
					struct Spec
					{
						struct PurposesItem
						{
							std::string type;
						};
						struct ConditionsItem
						{
							std::string type;
							std::vector<std::string> values;
							std::string strategy;
							int index;
							std::string _operator;
							long id;
							std::string key;
						};
						long order;
						std::string triggerPolicy;
						std::string group;
						int percent;
						bool transmitSwitch;
						std::vector<PurposesItem> purposes;
						std::string showName;
						std::vector<ConditionsItem> conditions;
						std::string url;
						std::vector<std::string> paramTypes;
						std::string type;
						std::string serviceName;
						std::string version;
						std::string className;
						bool enable;
						int transmitLevel;
						std::string conditionType;
						std::string methodName;
						std::string selector;
					};
					std::string appId;
					std::string kind;
					std::string labelType;
					Metadata metadata;
					long pointcutId;
					std::string id;
					std::string regionId;
					Spec spec;
					std::string envName;
					long labelAdviceId;
				};


				GetEnvTrafficControlResult();
				explicit GetEnvTrafficControlResult(const std::string &payload);
				~GetEnvTrafficControlResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_GETENVTRAFFICCONTROLRESULT_H_