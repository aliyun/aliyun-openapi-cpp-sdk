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

#ifndef ALIBABACLOUD_EDAS_MODEL_LISTSLBRESULT_H_
#define ALIBABACLOUD_EDAS_MODEL_LISTSLBRESULT_H_

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
			class ALIBABACLOUD_EDAS_EXPORT ListSlbResult : public ServiceResult
			{
			public:
				struct SlbEntity
				{
					std::string slbId;
					std::string address;
					std::string vpcId;
					std::string userId;
					std::string networkType;
					bool expired;
					std::string regionId;
					std::string addressType;
					std::string vswitchId;
					std::string slbName;
					std::string slbStatus;
					int groupId;
				};


				ListSlbResult();
				explicit ListSlbResult(const std::string &payload);
				~ListSlbResult();
				std::string getMessage()const;
				int getCode()const;
				std::vector<SlbEntity> getSlbList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int code_;
				std::vector<SlbEntity> slbList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_LISTSLBRESULT_H_