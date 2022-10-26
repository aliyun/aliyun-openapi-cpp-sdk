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

#ifndef ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBNODESPARAMETERSRESULT_H_
#define ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBNODESPARAMETERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT DescribeDBNodesParametersResult : public ServiceResult
			{
			public:
				struct DBNodeParameter
				{
					struct _Parameter
					{
						std::string defaultParameterValue;
						bool isModifiable;
						std::string checkingCode;
						std::string parameterStatus;
						std::string parameterValue;
						bool forceRestart;
						std::string isNodeAvailable;
						std::string factor;
						std::string paramRelyRule;
						std::string dataType;
						std::string parameterName;
						std::string parameterDescription;
					};
					std::vector<DBNodeParameter::_Parameter> runningParameters;
					std::string dBNodeId;
				};


				DescribeDBNodesParametersResult();
				explicit DescribeDBNodesParametersResult(const std::string &payload);
				~DescribeDBNodesParametersResult();
				std::string getDBVersion()const;
				std::vector<DBNodeParameter> getDBNodeIds()const;
				std::string getDBType()const;
				std::string getEngine()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBVersion_;
				std::vector<DBNodeParameter> dBNodeIds_;
				std::string dBType_;
				std::string engine_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_DESCRIBEDBNODESPARAMETERSRESULT_H_