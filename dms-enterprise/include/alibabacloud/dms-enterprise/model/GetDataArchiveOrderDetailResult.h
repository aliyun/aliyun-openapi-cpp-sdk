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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATAARCHIVEORDERDETAILRESULT_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATAARCHIVEORDERDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>

namespace AlibabaCloud
{
	namespace Dms_enterprise
	{
		namespace Model
		{
			class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT GetDataArchiveOrderDetailResult : public ServiceResult
			{
			public:
				struct DataArchiveOrderDetail
				{
					struct PluginExtraData
					{
						struct DagInfo
						{
							bool cronTrigger;
							std::string description;
							std::string creatorId;
							bool legacy;
							std::string dagOwnerId;
							long deployId;
							long editDagId;
							std::string gmtModified;
							bool dWDevelop;
							bool triggerOnce;
							std::string dagName;
							bool system;
							std::string gmtCreate;
							std::string tenantId;
							long isPublic;
							std::string cronEndDate;
							long id;
							std::string cronBeginDate;
						};
						struct DbBaseInfo
						{
							struct StandardGroup
							{
								std::string groupName;
								std::string gmtCreate;
								std::string description;
								bool freeOrStable;
								long lastMenderId;
								std::string gmtModified;
								std::string groupMode;
								long id;
								std::string dbType;
							};
							long alterTimeout;
							std::string description;
							std::string searchName;
							long port;
							std::string idc;
							std::string envType;
							long dbaId;
							bool follow;
							std::string idcTitle;
							std::string lastSyncTime;
							std::string unitType;
							long tableCount;
							bool logic;
							std::vector<std::string> ownerIds;
							bool assetControl;
							std::string clusterNode;
							StandardGroup standardGroup;
							std::string instanceSource;
							std::vector<std::string> ownerNames;
							long instanceId;
							std::string encoding;
							std::string host;
							std::string dbType;
							std::string dbaName;
							std::string alias;
							std::string state;
							long dbId;
							std::string catalogName;
							std::string level;
							std::string schemaName;
							std::string tnsName;
						};
						struct NextFireTimeResult
						{
							std::string cronFireType;
						};
						struct InstancesItem
						{
							std::string msg;
							long status;
							long triggerType;
							long historyDagId;
							std::string endTime;
							std::string gmtModified;
							long dagId;
							std::string gmtCreate;
							std::string tenantId;
							std::string lastRunningContext;
							std::string version;
							long id;
							std::string businessTime;
						};
						DbBaseInfo dbBaseInfo;
						std::vector<InstancesItem> instances;
						DagInfo dagInfo;
						long instanceTotal;
						long pageSize;
						std::string tempTableNameMap;
						long pageIndex;
						NextFireTimeResult nextFireTimeResult;
					};
					struct PluginParam
					{
						struct IncludeTables
						{
							std::string tableName;
							std::string tableWhere;
						};
						std::string archiveMethod;
						std::vector<std::string> variables;
						std::string runMethod;
						std::vector<std::string> orderAfter;
						std::string dbSchema;
						std::vector<IncludeTables> tableIncludes;
						std::string targetInstanceId;
						std::vector<std::string> tableMapping;
						bool logic;
						long sourceDatabaseId;
					};
					std::string comment;
					std::string gmtModified;
					PluginExtraData pluginExtraData;
					long committerId;
					std::string pluginType;
					std::string statusCode;
					std::vector<std::string> relatedUserNickList;
					PluginParam pluginParam;
					std::string statusDesc;
					std::string workflowStatusDesc;
					std::string gmtCreate;
					long workflowInstanceId;
					std::string committer;
					long id;
					std::vector<std::string> relatedUserList;
				};


				GetDataArchiveOrderDetailResult();
				explicit GetDataArchiveOrderDetailResult(const std::string &payload);
				~GetDataArchiveOrderDetailResult();
				std::string getTraceId()const;
				std::string getErrorCode()const;
				DataArchiveOrderDetail getDataArchiveOrderDetail()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string traceId_;
				std::string errorCode_;
				DataArchiveOrderDetail dataArchiveOrderDetail_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_GETDATAARCHIVEORDERDETAILRESULT_H_