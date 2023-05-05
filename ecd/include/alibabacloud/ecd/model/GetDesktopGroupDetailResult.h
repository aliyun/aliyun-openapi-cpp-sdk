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

#ifndef ALIBABACLOUD_ECD_MODEL_GETDESKTOPGROUPDETAILRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_GETDESKTOPGROUPDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT GetDesktopGroupDetailResult : public ServiceResult
			{
			public:
				struct Desktops
				{
					struct TimerInfo
					{
						int status;
						int timerType;
						std::string cronExpression;
						bool forced;
					};
					struct ScaleTimerInfo
					{
						std::string type;
						int buyResAmount;
						int loadPolicy;
						int maxResAmount;
						long keepDuration;
						float ratioThreshold;
						std::string cron;
						int minResAmount;
					};
					long connectDuration;
					long memory;
					std::string desktopGroupName;
					int cpu;
					std::string creator;
					std::string ownBundleId;
					std::vector<std::string> policyGroupIds;
					std::string directoryType;
					int allowBufferCount;
					int ownType;
					long version;
					long keepDuration;
					std::string expiredTime;
					std::string imageId;
					int resetType;
					int minDesktopsCount;
					std::string ownBundleName;
					int status;
					std::string officeSiteType;
					std::string payType;
					bool profileFollowSwitch;
					std::string directoryId;
					std::string creationTime;
					std::string timingStrategyInfo;
					std::string dataDiskSize;
					int buyDesktopsCount;
					std::vector<TimerInfo> timerInfos;
					int systemDiskSize;
					int bindAmount;
					int resType;
					std::vector<ScaleTimerInfo> scaleTimerInfos;
					std::string nasFileSystemName;
					int loadPolicy;
					int maxDesktopsCount;
					long idleDisconnectDuration;
					std::string officeSiteName;
					float gpuCount;
					std::string dataDiskCategory;
					std::string policyGroupId;
					std::string comments;
					std::vector<std::string> policyGroupNames;
					float ratioThreshold;
					std::string policyGroupName;
					std::string systemDiskCategory;
					std::string officeSiteId;
					std::string desktopGroupId;
					std::string gpuSpec;
					long stopDuration;
					int allowAutoSetup;
					std::string nasFileSystemID;
				};


				GetDesktopGroupDetailResult();
				explicit GetDesktopGroupDetailResult(const std::string &payload);
				~GetDesktopGroupDetailResult();
				Desktops getDesktops()const;

			protected:
				void parse(const std::string &payload);
			private:
				Desktops desktops_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_GETDESKTOPGROUPDETAILRESULT_H_