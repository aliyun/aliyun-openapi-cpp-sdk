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

#ifndef ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNRESULT_H_
#define ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNRESULT_H_

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
			class ALIBABACLOUD_NIS_EXPORT GetTransitRouterFlowTopNResult : public ServiceResult
			{
			public:
				struct TrFlowlogTopN
				{
					std::string accountId;
					std::string endTime;
					std::string otherPort;
					std::string thisIp;
					std::string startTime;
					std::string thisRegion;
					std::string thisPort;
					std::string otherIp;
					double bytes;
					std::string otherRegion;
					double packets;
					std::string bandwithPackageId;
					std::string cenId;
					std::string protocol;
				};


				GetTransitRouterFlowTopNResult();
				explicit GetTransitRouterFlowTopNResult(const std::string &payload);
				~GetTransitRouterFlowTopNResult();
				std::vector<TrFlowlogTopN> getTransitRouterFlowTopN()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<TrFlowlogTopN> transitRouterFlowTopN_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNRESULT_H_