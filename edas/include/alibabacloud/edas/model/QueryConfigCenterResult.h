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

#ifndef ALIBABACLOUD_EDAS_MODEL_QUERYCONFIGCENTERRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_QUERYCONFIGCENTERRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT QueryConfigCenterResult : public ServiceResult
			{
			public:
				struct ConfigCenterInfo
				{
					std::string group;
					std::string dataId;
					std::string content;
					std::string id;
					std::string appName;
				};


				QueryConfigCenterResult();
				explicit QueryConfigCenterResult(const std::string &payload);
				~QueryConfigCenterResult();
				ConfigCenterInfo getConfigCenterInfo()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				ConfigCenterInfo configCenterInfo_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_QUERYCONFIGCENTERRESULT_H_