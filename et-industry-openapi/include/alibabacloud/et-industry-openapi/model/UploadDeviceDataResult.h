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

#ifndef ALIBABACLOUD_ET_INDUSTRY_OPENAPI_MODEL_UPLOADDEVICEDATARESULT_H_
#define ALIBABACLOUD_ET_INDUSTRY_OPENAPI_MODEL_UPLOADDEVICEDATARESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/et-industry-openapi/Et_industry_openapiExport.h>

namespace AlibabaCloud
{
	namespace Et_industry_openapi
	{
		namespace Model
		{
			class ALIBABACLOUD_ET_INDUSTRY_OPENAPI_EXPORT UploadDeviceDataResult : public ServiceResult
			{
			public:


				UploadDeviceDataResult();
				explicit UploadDeviceDataResult(const std::string &payload);
				~UploadDeviceDataResult();
				std::string getMessage()const;
				std::string getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ET_INDUSTRY_OPENAPI_MODEL_UPLOADDEVICEDATARESULT_H_