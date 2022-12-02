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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeVulListResult : public ServiceResult
			{
			public:
				struct VulRecord
				{
					struct ExtendContentJson
					{
						struct Necessity
						{
							std::string status;
							std::string total_score;
							std::string gmt_create;
							std::string time_factor;
							std::string cvss_factor;
							std::string is_calc;
							std::string enviroment_factor;
							std::string assets_factor;
						};
						struct PreCheck
						{
							std::string msg;
							long code;
						};
						struct AgentScanVul
						{
							std::string target;
							std::string poc;
							std::string proof;
						};
						struct RpmEntity
						{
							std::string path;
							std::string imageName;
							std::string updateCmd;
							std::vector<std::string> matchList;
							std::string version;
							std::string containerName;
							std::string extendField;
							std::string pid;
							std::string fullVersion;
							std::string matchDetail;
							std::string name;
						};
						std::string description;
						std::string os;
						std::string ip;
						AgentScanVul agentScanVul;
						std::string reason;
						std::string cwe;
						std::string target;
						std::string wasc;
						std::string aliasName;
						PreCheck preCheck;
						std::string osRelease;
						std::string solution;
						std::string vulType;
						std::string status;
						std::vector<std::string> cveList;
						std::string owasp;
						std::string reference;
						Necessity necessity;
						long lastTs;
						std::vector<RpmEntity> rpmEntityList;
						std::string title;
						std::string absolutePath;
						std::string renderData;
						std::string proof;
						std::string effect;
						std::string level;
						std::string tag;
						std::string emgProof;
						long primaryId;
					};
					struct ProcessInfo
					{
						struct Process
						{
							struct SubProcess
							{
								std::string pname;
								std::string pid;
								std::string rpm;
							};
							std::string pname;
							std::string pid;
							std::vector<Process::SubProcess> subProcessList;
							std::string rpm;
						};
						int totalCount;
						std::vector<Process> processList;
						long gmtLastTs;
					};
					bool bind;
					std::string k8sNodeId;
					std::string k8sNodeName;
					std::string osVersion;
					std::string ip;
					std::string containerInnerPath;
					std::string product;
					std::string intranetIp;
					std::string k8sClusterId;
					std::string name;
					long repairTs;
					std::string k8sNamespace;
					long modifyTs;
					std::string internetIp;
					std::string containerId;
					std::string containerName;
					std::string aliasName;
					long recordId;
					std::string canFix;
					int raspDefend;
					ExtendContentJson extendContentJson;
					int status;
					int isPoc;
					int progress;
					std::string instanceId;
					std::string osName;
					long lastTs;
					std::string necessity;
					ProcessInfo processInfo;
					std::string needReboot;
					std::string k8sPodName;
					std::string resultMessage;
					std::string containerImageId;
					int groupId;
					std::string instanceName;
					std::string type;
					long firstTs;
					std::string related;
					std::string uuid;
					std::string containerImageName;
					int raspStatus;
					std::string level;
					std::string tag;
					std::string regionId;
					bool online;
					std::string authVersion;
					long primaryId;
					std::string resultCode;
				};


				DescribeVulListResult();
				explicit DescribeVulListResult(const std::string &payload);
				~DescribeVulListResult();
				int getTotalCount()const;
				std::vector<VulRecord> getVulRecords()const;
				int getPageSize()const;
				int getCurrentPage()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<VulRecord> vulRecords_;
				int pageSize_;
				int currentPage_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVULLISTRESULT_H_