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

#ifndef ALIBABACLOUD_DYPNSAPI_MODEL_GETCERTIFYRESULTRESULT_H_
#define ALIBABACLOUD_DYPNSAPI_MODEL_GETCERTIFYRESULTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dypnsapi/DypnsapiExport.h>

namespace AlibabaCloud
{
	namespace Dypnsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYPNSAPI_EXPORT GetCertifyResultResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string deviceToken;
					std::string identityInfo;
					std::string materialInfo;
					std::string verifyResult;
					std::string verifyDesc;
				};


				GetCertifyResultResult();
				explicit GetCertifyResultResult(const std::string &payload);
				~GetCertifyResultResult();
				std::string getMessage()const;
				std::vector<DataItem> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<DataItem> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYPNSAPI_MODEL_GETCERTIFYRESULTRESULT_H_