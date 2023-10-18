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

#ifndef ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTMATERIALSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTMATERIALSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT AddEditingProjectMaterialsResult : public ServiceResult
			{
			public:
				struct Material
				{
					std::string status;
					std::string modifyTime;
					std::string materialId;
					std::string description;
					long size;
					std::string createTime;
					std::string spriteConfig;
					std::string title;
					float duration;
					int cateId;
					std::string cateName;
					long customerId;
					std::string materialType;
					std::vector<std::string> sprites;
					std::string coverURL;
					std::vector<std::string> snapshots;
					std::string tags;
				};


				AddEditingProjectMaterialsResult();
				explicit AddEditingProjectMaterialsResult(const std::string &payload);
				~AddEditingProjectMaterialsResult();
				std::vector<Material> getMaterialList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Material> materialList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_ADDEDITINGPROJECTMATERIALSRESULT_H_