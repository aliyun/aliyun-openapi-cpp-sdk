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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeParametersResult : public ServiceResult
			{
			public:
				struct ParamGroupInfo
				{
					std::string parameterGroupName;
					std::string parameterGroupDesc;
					std::string parameterGroupType;
					std::string paramGroupId;
				};
				struct DBInstanceParameter
				{
					std::string parameterValue;
					std::string parameterName;
					std::string parameterDescription;
				};
				struct DBInstanceParameter1
				{
					std::string parameterValueRange;
					std::string parameterValue;
					std::string parameterDefaultValue;
					std::string parameterName;
					std::string parameterDescription;
				};


				DescribeParametersResult();
				explicit DescribeParametersResult(const std::string &payload);
				~DescribeParametersResult();
				std::vector<DBInstanceParameter1> getRunningParameters()const;
				std::string getEngineVersion()const;
				ParamGroupInfo getParamGroupInfo()const;
				std::vector<DBInstanceParameter> getConfigParameters()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DBInstanceParameter1> runningParameters_;
				std::string engineVersion_;
				ParamGroupInfo paramGroupInfo_;
				std::vector<DBInstanceParameter> configParameters_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEPARAMETERSRESULT_H_