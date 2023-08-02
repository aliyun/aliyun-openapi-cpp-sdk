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

#ifndef ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT DescribeDBInstanceDiagnosisSummaryResult : public ServiceResult
			{
			public:
				struct MasterStatusInfo
				{
					int normalNodeNum;
					int exceptionNodeNum;
					int preferredNodeNum;
					int syncedNodeNum;
					int notSyncingNodeNum;
					int notPreferredNodeNum;
				};
				struct SegmentStatusInfo
				{
					int normalNodeNum;
					int exceptionNodeNum;
					int preferredNodeNum;
					int syncedNodeNum;
					int notSyncingNodeNum;
					int notPreferredNodeNum;
				};
				struct ItemsItem
				{
					std::string nodeRole;
					std::string nodeName;
					std::string nodeType;
					std::string hostname;
					std::string nodeID;
					std::string nodeReplicationMode;
					std::string nodeAddress;
					std::string nodePort;
					std::string nodePreferredRole;
					std::string nodeCID;
					std::string nodeStatus;
				};


				DescribeDBInstanceDiagnosisSummaryResult();
				explicit DescribeDBInstanceDiagnosisSummaryResult(const std::string &payload);
				~DescribeDBInstanceDiagnosisSummaryResult();
				SegmentStatusInfo getSegmentStatusInfo()const;
				std::string getTotalCount()const;
				MasterStatusInfo getMasterStatusInfo()const;
				std::string getPageNumber()const;
				std::vector<ItemsItem> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				SegmentStatusInfo segmentStatusInfo_;
				std::string totalCount_;
				MasterStatusInfo masterStatusInfo_;
				std::string pageNumber_;
				std::vector<ItemsItem> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESULT_H_