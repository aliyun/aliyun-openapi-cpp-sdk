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

#ifndef ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESRESULT_H_
#define ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/resourcecenter/ResourceCenterExport.h>

namespace AlibabaCloud
{
	namespace ResourceCenter
	{
		namespace Model
		{
			class ALIBABACLOUD_RESOURCECENTER_EXPORT ListResourceTypesResult : public ServiceResult
			{
			public:
				struct ResourceType
				{
					struct CodeMapping
					{
						std::string tag;
						std::string resourceGroup;
					};
					struct Urls
					{
						std::string productConsoleUrl;
						std::string resourceConsoleUrl;
					};
					std::string resourceTypeName;
					std::string productName;
					bool authorized;
					std::vector<std::string> filterKeys;
					CodeMapping codeMapping;
					std::string resourceType;
					Urls urls;
					std::vector<std::string> relatedResourceTypes;
				};


				ListResourceTypesResult();
				explicit ListResourceTypesResult(const std::string &payload);
				~ListResourceTypesResult();
				std::vector<ResourceType> getResourceTypes()const;
				std::string getDynamicCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ResourceType> resourceTypes_;
				std::string dynamicCode_;
				std::string dynamicMessage_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RESOURCECENTER_MODEL_LISTRESOURCETYPESRESULT_H_