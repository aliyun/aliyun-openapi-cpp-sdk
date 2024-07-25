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

#ifndef ALIBABACLOUD_CAMS_MODEL_QUERYWABABUSINESSINFORESULT_H_
#define ALIBABACLOUD_CAMS_MODEL_QUERYWABABUSINESSINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cams/CamsExport.h>

namespace AlibabaCloud
{
	namespace Cams
	{
		namespace Model
		{
			class ALIBABACLOUD_CAMS_EXPORT QueryWabaBusinessInfoResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string vertical;
					std::string verificationStatus;
					std::string businessName;
					std::string businessId;
				};


				QueryWabaBusinessInfoResult();
				explicit QueryWabaBusinessInfoResult(const std::string &payload);
				~QueryWabaBusinessInfoResult();
				std::string getAccessDeniedDetail()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string accessDeniedDetail_;
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAMS_MODEL_QUERYWABABUSINESSINFORESULT_H_