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

#ifndef ALIBABACLOUD_OCEANBASEPRO_MODEL_RELEASEOMSOPENAPIPROJECTRESULT_H_
#define ALIBABACLOUD_OCEANBASEPRO_MODEL_RELEASEOMSOPENAPIPROJECTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/oceanbasepro/OceanBaseProExport.h>

namespace AlibabaCloud
{
	namespace OceanBasePro
	{
		namespace Model
		{
			class ALIBABACLOUD_OCEANBASEPRO_EXPORT ReleaseOmsOpenAPIProjectResult : public ServiceResult
			{
			public:
				struct ErrorDetail
				{
					std::string message;
					std::string level;
					std::string code;
					std::string proposal;
				};


				ReleaseOmsOpenAPIProjectResult();
				explicit ReleaseOmsOpenAPIProjectResult(const std::string &payload);
				~ReleaseOmsOpenAPIProjectResult();
				ErrorDetail getErrorDetail()const;
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				bool getData()const;
				std::string getAdvice()const;
				std::string getCode()const;
				std::string getCost()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				ErrorDetail errorDetail_;
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				bool data_;
				std::string advice_;
				std::string code_;
				std::string cost_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OCEANBASEPRO_MODEL_RELEASEOMSOPENAPIPROJECTRESULT_H_