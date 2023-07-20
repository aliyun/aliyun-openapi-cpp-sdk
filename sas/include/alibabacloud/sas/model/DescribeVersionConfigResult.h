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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEVERSIONCONFIGRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEVERSIONCONFIGRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeVersionConfigResult : public ServiceResult
			{
			public:


				DescribeVersionConfigResult();
				explicit DescribeVersionConfigResult(const std::string &payload);
				~DescribeVersionConfigResult();
				bool getIsNewMultiVersion()const;
				bool getIsPaidUser()const;
				long getImageScanCapacity()const;
				long getAppWhiteListAuthCount()const;
				int getLogTime()const;
				long getRaspCapacity()const;
				int getSasLog()const;
				long getOpenTime()const;
				int getVersion()const;
				int getAvdsFlag()const;
				int getHighestVersion()const;
				long getLastTrailEndTime()const;
				long getWebLockAuthCount()const;
				long getSlsCapacity()const;
				int getUserDefinedAlarms()const;
				int getAllowPartialBuy()const;
				long getAgentlessCapacity()const;
				int getWebLock()const;
				long getThreatAnalysisCapacity()const;
				bool getIsOverBalance()const;
				int getVmCores()const;
				long getHoneypotCapacity()const;
				long getVulFixCapacity()const;
				int getAssetLevel()const;
				std::string getInstanceId()const;
				long getLastInstanceReleaseTime()const;
				long getCreateTime()const;
				int getSasScreen()const;
				long getCspmCapacity()const;
				bool getIsSasOpening()const;
				int getLogCapacity()const;
				int getFlag()const;
				int getMVAuthCount()const;
				long getGmtCreate()const;
				long getReleaseTime()const;
				bool getIsNewContainerVersion()const;
				int getMVUnusedAuthCount()const;
				int getIsTrialVersion()const;
				int getAppWhiteList()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isNewMultiVersion_;
				bool isPaidUser_;
				long imageScanCapacity_;
				long appWhiteListAuthCount_;
				int logTime_;
				long raspCapacity_;
				int sasLog_;
				long openTime_;
				int version_;
				int avdsFlag_;
				int highestVersion_;
				long lastTrailEndTime_;
				long webLockAuthCount_;
				long slsCapacity_;
				int userDefinedAlarms_;
				int allowPartialBuy_;
				long agentlessCapacity_;
				int webLock_;
				long threatAnalysisCapacity_;
				bool isOverBalance_;
				int vmCores_;
				long honeypotCapacity_;
				long vulFixCapacity_;
				int assetLevel_;
				std::string instanceId_;
				long lastInstanceReleaseTime_;
				long createTime_;
				int sasScreen_;
				long cspmCapacity_;
				bool isSasOpening_;
				int logCapacity_;
				int flag_;
				int mVAuthCount_;
				long gmtCreate_;
				long releaseTime_;
				bool isNewContainerVersion_;
				int mVUnusedAuthCount_;
				int isTrialVersion_;
				int appWhiteList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVERSIONCONFIGRESULT_H_