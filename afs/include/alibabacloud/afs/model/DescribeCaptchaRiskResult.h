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

#ifndef ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHARISKRESULT_H_
#define ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHARISKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT DescribeCaptchaRiskResult : public ServiceResult
			{
			public:


				DescribeCaptchaRiskResult();
				explicit DescribeCaptchaRiskResult(const std::string &payload);
				~DescribeCaptchaRiskResult();
				int getNumOfLastMonth()const;
				std::string getRiskLevel()const;
				std::string getBizCode()const;
				int getNumOfThisMonth()const;

			protected:
				void parse(const std::string &payload);
			private:
				int numOfLastMonth_;
				std::string riskLevel_;
				std::string bizCode_;
				int numOfThisMonth_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_DESCRIBECAPTCHARISKRESULT_H_