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

#ifndef ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODERESULT_H_
#define ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lmztest/LmzTestExport.h>

namespace AlibabaCloud
{
	namespace LmzTest
	{
		namespace Model
		{
			class ALIBABACLOUD_LMZTEST_EXPORT ListProductsByPopCodeResult : public ServiceResult
			{
			public:
				struct ResultItem
				{
					struct UniqueKeyDTO
					{
						std::string namespaceCode;
					};
					struct NameSpaceExtDTO
					{
						struct BusinessOwnerListItem
						{
							std::string bucId;
							std::string id;
							std::string name;
						};
						struct TechniqueOwnerListItem
						{
							std::string bucId;
							std::string id;
							std::string name;
						};
						std::vector<BusinessOwnerListItem> businessOwnerList;
						std::vector<TechniqueOwnerListItem> techniqueOwnerList;
					};
					UniqueKeyDTO uniqueKeyDTO;
					NameSpaceExtDTO nameSpaceExtDTO;
				};


				ListProductsByPopCodeResult();
				explicit ListProductsByPopCodeResult(const std::string &payload);
				~ListProductsByPopCodeResult();
				std::string getErrorDetailMessage()const;
				std::string getTraceId()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;
				std::vector<ResultItem> getResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorDetailMessage_;
				std::string traceId_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;
				std::vector<ResultItem> result_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LMZTEST_MODEL_LISTPRODUCTSBYPOPCODERESULT_H_