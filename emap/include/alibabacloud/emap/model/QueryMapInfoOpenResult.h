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

#ifndef ALIBABACLOUD_EMAP_MODEL_QUERYMAPINFOOPENRESULT_H_
#define ALIBABACLOUD_EMAP_MODEL_QUERYMAPINFOOPENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emap/EmapExport.h>

namespace AlibabaCloud
{
	namespace Emap
	{
		namespace Model
		{
			class ALIBABACLOUD_EMAP_EXPORT QueryMapInfoOpenResult : public ServiceResult
			{
			public:


				QueryMapInfoOpenResult();
				explicit QueryMapInfoOpenResult(const std::string &payload);
				~QueryMapInfoOpenResult();
				std::string getMessage()const;
				std::string getRenderData()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string renderData_;
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
#endif // !ALIBABACLOUD_EMAP_MODEL_QUERYMAPINFOOPENRESULT_H_