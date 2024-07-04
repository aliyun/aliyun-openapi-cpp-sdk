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

#ifndef ALIBABACLOUD_NIS_MODEL_GETNATTOPNRESULT_H_
#define ALIBABACLOUD_NIS_MODEL_GETNATTOPNRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/nis/NisExport.h>

namespace AlibabaCloud
{
	namespace Nis
	{
		namespace Model
		{
			class ALIBABACLOUD_NIS_EXPORT GetNatTopNResult : public ServiceResult
			{
			public:
				struct NatGatewayTopNItem
				{
					float outPps;
					float outBps;
					std::string ip;
					float inBps;
					float newSessionPerSecond;
					float outFlowPerMinute;
					float inPps;
					float activeSessionCount;
					float inFlowPerMinute;
				};


				GetNatTopNResult();
				explicit GetNatTopNResult(const std::string &payload);
				~GetNatTopNResult();
				std::vector<NatGatewayTopNItem> getNatGatewayTopN()const;
				bool getIsTopNOpen()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<NatGatewayTopNItem> natGatewayTopN_;
				bool isTopNOpen_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NIS_MODEL_GETNATTOPNRESULT_H_