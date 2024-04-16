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

#ifndef ALIBABACLOUD_EHPC_MODEL_ADDIMAGERESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_ADDIMAGERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT AddImageResult : public ServiceResult
			{
			public:


				AddImageResult();
				explicit AddImageResult(const std::string &payload);
				~AddImageResult();
				std::string getAppId()const;
				std::string getImageId()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string appId_;
				std::string imageId_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_ADDIMAGERESULT_H_