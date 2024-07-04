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

#ifndef ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHRESULT_H_
#define ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHRESULT_H_

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
			class ALIBABACLOUD_NIS_EXPORT CreateAndAnalyzeNetworkPathResult : public ServiceResult
			{
			public:


				CreateAndAnalyzeNetworkPathResult();
				explicit CreateAndAnalyzeNetworkPathResult(const std::string &payload);
				~CreateAndAnalyzeNetworkPathResult();
				std::string getTargetPort()const;
				std::string getNetworkReachableAnalysisId()const;
				std::string getSourceId()const;
				std::string getSourceType()const;
				std::string getTargetType()const;
				std::string getSourcePort()const;
				std::string getProtocol()const;
				std::string getTargetId()const;
				std::string getSourceIpAddress()const;
				std::string getTargetIpAddress()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string targetPort_;
				std::string networkReachableAnalysisId_;
				std::string sourceId_;
				std::string sourceType_;
				std::string targetType_;
				std::string sourcePort_;
				std::string protocol_;
				std::string targetId_;
				std::string sourceIpAddress_;
				std::string targetIpAddress_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_NIS_MODEL_CREATEANDANALYZENETWORKPATHRESULT_H_