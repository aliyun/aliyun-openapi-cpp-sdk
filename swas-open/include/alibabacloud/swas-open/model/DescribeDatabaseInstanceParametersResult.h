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

#ifndef ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEDATABASEINSTANCEPARAMETERSRESULT_H_
#define ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEDATABASEINSTANCEPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/swas-open/SWAS_OPENExport.h>

namespace AlibabaCloud
{
	namespace SWAS_OPEN
	{
		namespace Model
		{
			class ALIBABACLOUD_SWAS_OPEN_EXPORT DescribeDatabaseInstanceParametersResult : public ServiceResult
			{
			public:
				struct ConfigParameter
				{
					std::string forceModify;
					std::string checkingCode;
					std::string parameterValue;
					std::string forceRestart;
					std::string parameterName;
					std::string parameterDescription;
				};
				struct RunningParameter
				{
					std::string forceModify;
					std::string checkingCode;
					std::string parameterValue;
					std::string forceRestart;
					std::string parameterName;
					std::string parameterDescription;
				};


				DescribeDatabaseInstanceParametersResult();
				explicit DescribeDatabaseInstanceParametersResult(const std::string &payload);
				~DescribeDatabaseInstanceParametersResult();
				std::vector<RunningParameter> getRunningParameters()const;
				std::string getEngineVersion()const;
				std::vector<ConfigParameter> getConfigParameters()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<RunningParameter> runningParameters_;
				std::string engineVersion_;
				std::vector<ConfigParameter> configParameters_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SWAS_OPEN_MODEL_DESCRIBEDATABASEINSTANCEPARAMETERSRESULT_H_