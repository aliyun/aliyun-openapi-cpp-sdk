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

#ifndef ALIBABACLOUD_OOS_MODEL_CREATEOPSITEMRESULT_H_
#define ALIBABACLOUD_OOS_MODEL_CREATEOPSITEMRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT CreateOpsItemResult : public ServiceResult
			{
			public:
				struct OpsItem
				{
					std::string status;
					std::string lastModifiedBy;
					std::string description;
					std::string category;
					std::string createdBy;
					std::string resourceGroupId;
					int priority;
					std::string attributes;
					std::string title;
					std::string severity;
					std::string createDate;
					std::string source;
					std::string updateDate;
					std::string opsItemId;
					std::string solutions;
					std::string resources;
					std::string tags;
				};


				CreateOpsItemResult();
				explicit CreateOpsItemResult(const std::string &payload);
				~CreateOpsItemResult();
				OpsItem getOpsItem()const;

			protected:
				void parse(const std::string &payload);
			private:
				OpsItem opsItem_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_CREATEOPSITEMRESULT_H_