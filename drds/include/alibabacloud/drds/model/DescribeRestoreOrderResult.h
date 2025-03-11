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

#ifndef ALIBABACLOUD_DRDS_MODEL_DESCRIBERESTOREORDERRESULT_H_
#define ALIBABACLOUD_DRDS_MODEL_DESCRIBERESTOREORDERRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/drds/DrdsExport.h>

namespace AlibabaCloud
{
	namespace Drds
	{
		namespace Model
		{
			class ALIBABACLOUD_DRDS_EXPORT DescribeRestoreOrderResult : public ServiceResult
			{
			public:
				struct RestoreOrderDO
				{
					struct DrdsOrderDOListItem
					{
						std::string vSwtichId;
						std::string vpcId;
						std::string network;
						std::string instSpec;
						std::string azoneId;
						std::string regionId;
					};
					struct RdsOrderDOListItem
					{
						std::string dbInstanceStorage;
						std::string version;
						std::string network;
						long num;
						std::string instanceClass;
						std::string azoneId;
						std::string regionId;
						std::string engine;
					};
					struct PolarOrderDOListItem
					{
						std::string dbInstanceStorage;
						std::string version;
						std::string network;
						long num;
						std::string instanceClass;
						std::string azoneId;
						std::string regionId;
						std::string engine;
					};
					std::vector<DrdsOrderDOListItem> drdsOrderDOList;
					std::vector<PolarOrderDOListItem> polarOrderDOList;
					std::vector<RdsOrderDOListItem> rdsOrderDOList;
				};


				DescribeRestoreOrderResult();
				explicit DescribeRestoreOrderResult(const std::string &payload);
				~DescribeRestoreOrderResult();
				RestoreOrderDO getRestoreOrderDO()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				RestoreOrderDO restoreOrderDO_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DRDS_MODEL_DESCRIBERESTOREORDERRESULT_H_