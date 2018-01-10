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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBELOGICDBINSTANCETOPOLOGYRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBELOGICDBINSTANCETOPOLOGYRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeLogicDBInstanceTopologyResult : public ServiceResult
			{
			public:
				struct LogicDBInstanceParameter
				{
					std::string engineVersion;
					int dBInstanceStatus;
					int dBInstanceID;
					std::string dBInstanceStatusDesc;
					std::string characterType;
					std::string dBInstanceConnType;
					std::string dBInstanceDescription;
					std::string engine;
					std::string dBInstanceName;
				};


				DescribeLogicDBInstanceTopologyResult();
				explicit DescribeLogicDBInstanceTopologyResult(const std::string &payload);
				~DescribeLogicDBInstanceTopologyResult();
				std::string getEngineVersion()const;
				void setEngineVersion(const std::string& engineVersion);
				int getDBInstanceStatus()const;
				void setDBInstanceStatus(int dBInstanceStatus);
				int getDBInstanceId()const;
				void setDBInstanceId(int dBInstanceId);
				std::vector<LogicDBInstanceParameter> getItems()const;
				void setItems(const std::vector<LogicDBInstanceParameter>& items);
				std::string getDBInstanceStatusDesc()const;
				void setDBInstanceStatusDesc(const std::string& dBInstanceStatusDesc);
				std::string getDBInstanceConnType()const;
				void setDBInstanceConnType(const std::string& dBInstanceConnType);
				std::string getDBInstanceDescription()const;
				void setDBInstanceDescription(const std::string& dBInstanceDescription);
				std::string getEngine()const;
				void setEngine(const std::string& engine);
				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);

			protected:
				void parse(const std::string &payload);
			private:
				std::string engineVersion_;
				int dBInstanceStatus_;
				int dBInstanceId_;
				std::vector<LogicDBInstanceParameter> items_;
				std::string dBInstanceStatusDesc_;
				std::string dBInstanceConnType_;
				std::string dBInstanceDescription_;
				std::string engine_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBELOGICDBINSTANCETOPOLOGYRESULT_H_