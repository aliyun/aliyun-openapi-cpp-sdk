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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListResourceGroupsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					int status;
					bool isDefault;
					std::string createTime;
					std::string mode;
					std::string cluster;
					int sequence;
					std::string resourceGroupType;
					std::string name;
					std::string resourceManagerResourceGroupId;
					long tenantId;
					std::string identifier;
					bool enableKp;
					std::string bizExtKey;
					std::string updateTime;
					long id;
					std::vector<DataItem::Tag> tags;
					std::string specs;
				};


				ListResourceGroupsResult();
				explicit ListResourceGroupsResult(const std::string &payload);
				~ListResourceGroupsResult();
				int getHttpStatusCode()const;
				std::vector<DataItem> getData()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::vector<DataItem> data_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTRESOURCEGROUPSRESULT_H_