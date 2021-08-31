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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTSCALEOUTECURESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTSCALEOUTECURESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ListScaleOutEcuResult : public ServiceResult
			{
			public:
				struct EcuInfo
				{
					std::string ipAddr;
					std::string zoneId;
					std::string instanceId;
					long createTime;
					std::string ecuId;
					long heartbeatTime;
					int availableMem;
					std::string name;
					std::string vpcId;
					std::string userId;
					long updateTime;
					std::string regionId;
					bool online;
					bool dockerEnv;
					int availableCpu;
				};


				ListScaleOutEcuResult();
				explicit ListScaleOutEcuResult(const std::string &payload);
				~ListScaleOutEcuResult();
				std::vector<EcuInfo> getEcuInfoList()const;
				std::string getMessage()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<EcuInfo> ecuInfoList_;
				std::string message_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTSCALEOUTECURESULT_H_