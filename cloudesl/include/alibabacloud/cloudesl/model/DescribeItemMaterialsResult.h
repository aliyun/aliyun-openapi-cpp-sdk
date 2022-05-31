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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMMATERIALSRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMMATERIALSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT DescribeItemMaterialsResult : public ServiceResult
			{
			public:
				struct ItemMaterialInfo
				{
					std::string gmtCreate;
					std::string barCode;
					std::string itemName;
				};


				DescribeItemMaterialsResult();
				explicit DescribeItemMaterialsResult(const std::string &payload);
				~DescribeItemMaterialsResult();
				int getTotalCount()const;
				int getPageSize()const;
				std::string getMessage()const;
				int getPageNumber()const;
				std::vector<ItemMaterialInfo> getMaterials()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				std::string message_;
				int pageNumber_;
				std::vector<ItemMaterialInfo> materials_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_DESCRIBEITEMMATERIALSRESULT_H_