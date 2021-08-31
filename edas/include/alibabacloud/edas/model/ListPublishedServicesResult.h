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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTPUBLISHEDSERVICESRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTPUBLISHEDSERVICESRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ListPublishedServicesResult : public ServiceResult
			{
			public:
				struct ListPublishedServices
				{
					std::string group2Ip;
					std::string type;
					std::string appId;
					std::string version;
					bool dockerApplication;
					std::vector<std::string> groups;
					std::vector<std::string> ips;
					std::string name;
				};


				ListPublishedServicesResult();
				explicit ListPublishedServicesResult(const std::string &payload);
				~ListPublishedServicesResult();
				std::string getMessage()const;
				std::vector<ListPublishedServices> getPublishedServicesList()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<ListPublishedServices> publishedServicesList_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTPUBLISHEDSERVICESRESULT_H_