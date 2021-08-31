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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYECCINFORESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYECCINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT QueryEccInfoResult : public ServiceResult
			{
			public:
				struct EccInfo
				{
					std::string groupName;
					std::string appId;
					std::string vpcId;
					std::string ecuId;
					std::string packageMd5;
					std::string eccId;
					std::string packageVersion;
					std::string groupId;
				};


				QueryEccInfoResult();
				explicit QueryEccInfoResult(const std::string &payload);
				~QueryEccInfoResult();
				EccInfo getEccInfo()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				EccInfo eccInfo_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYECCINFORESULT_H_