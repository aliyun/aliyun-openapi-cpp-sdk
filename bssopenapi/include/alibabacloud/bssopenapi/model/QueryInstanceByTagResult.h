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

#ifndef ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEBYTAGRESULT_H_
#define ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEBYTAGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/bssopenapi/BssOpenApiExport.h>

namespace AlibabaCloud
{
	namespace BssOpenApi
	{
		namespace Model
		{
			class ALIBABACLOUD_BSSOPENAPI_EXPORT QueryInstanceByTagResult : public ServiceResult
			{
			public:
				struct TagResourceItem
				{
					struct TagKeyValue
					{
						std::string value;
						std::string key;
					};
					std::string resourceId;
					std::string resourceType;
					std::vector<TagResourceItem::TagKeyValue> tag;
				};


				QueryInstanceByTagResult();
				explicit QueryInstanceByTagResult(const std::string &payload);
				~QueryInstanceByTagResult();
				std::string getMessage()const;
				std::string getNextToken()const;
				std::vector<TagResourceItem> getTagResource()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string nextToken_;
				std::vector<TagResourceItem> tagResource_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_BSSOPENAPI_MODEL_QUERYINSTANCEBYTAGRESULT_H_