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

#ifndef ALIBABACLOUD_CRM_MODEL_BATCHGETALIYUNIDBYALIYUNPKRESULT_H_
#define ALIBABACLOUD_CRM_MODEL_BATCHGETALIYUNIDBYALIYUNPKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/crm/CrmExport.h>

namespace AlibabaCloud
{
	namespace Crm
	{
		namespace Model
		{
			class ALIBABACLOUD_CRM_EXPORT BatchGetAliyunIdByAliyunPkResult : public ServiceResult
			{
			public:
				struct ProfileItem
				{
					std::string aliyunId;
					std::string aliyunPk;
				};


				BatchGetAliyunIdByAliyunPkResult();
				explicit BatchGetAliyunIdByAliyunPkResult(const std::string &payload);
				~BatchGetAliyunIdByAliyunPkResult();
				std::vector<ProfileItem> getProfileList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ProfileItem> profileList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CRM_MODEL_BATCHGETALIYUNIDBYALIYUNPKRESULT_H_