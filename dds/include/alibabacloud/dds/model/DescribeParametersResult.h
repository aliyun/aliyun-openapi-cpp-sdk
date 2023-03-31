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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEPARAMETERSRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeParametersResult : public ServiceResult
			{
			public:
				struct _Parameter
				{
					std::string checkingCode;
					std::string modifiableStatus;
					std::string parameterValue;
					std::string forceRestart;
					std::string parameterName;
					std::string characterType;
					std::string parameterDescription;
				};
				struct _Parameter1
				{
					std::string checkingCode;
					bool modifiableStatus;
					std::string parameterValue;
					bool forceRestart;
					std::string parameterName;
					std::string parameterDescription;
				};


				DescribeParametersResult();
				explicit DescribeParametersResult(const std::string &payload);
				~DescribeParametersResult();
				std::vector<_Parameter> getRunningParameters()const;
				std::string getEngineVersion()const;
				std::vector<_Parameter1> getConfigParameters()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<_Parameter> runningParameters_;
				std::string engineVersion_;
				std::vector<_Parameter1> configParameters_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEPARAMETERSRESULT_H_