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

#ifndef ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOPHONCOMMANDSRESULT_H_
#define ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOPHONCOMMANDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sophonsoar/SophonsoarExport.h>

namespace AlibabaCloud
{
	namespace Sophonsoar
	{
		namespace Model
		{
			class ALIBABACLOUD_SOPHONSOAR_EXPORT DescribeSophonCommandsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct ParamConfigItem
					{
						std::string field;
						bool necessary;
						std::string checkField;
						std::string value;
					};
					std::string commandTag;
					std::string description;
					std::string actionType;
					std::string displayName;
					std::string commandEntity;
					std::string taskConfig;
					std::vector<DataItem::ParamConfigItem> paramConfig;
					std::string name;
				};


				DescribeSophonCommandsResult();
				explicit DescribeSophonCommandsResult(const std::string &payload);
				~DescribeSophonCommandsResult();
				std::vector<DataItem> getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SOPHONSOAR_MODEL_DESCRIBESOPHONCOMMANDSRESULT_H_