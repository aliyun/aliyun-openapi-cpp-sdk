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
				bool getIsPaidUser()const;
				long getImageScanCapacity()const;
				long getAppWhiteListAuthCount()const;
				int getLogTime()const;
				int getSasLog()const;
				int getVersion()const;
				int getAvdsFlag()const;
				long getWebLockAuthCount()const;
				long getSlsCapacity()const;
				long getLastTrailEndTime()const;
				int getUserDefinedAlarms()const;
				int getWebLock()const;
				bool getIsOverBalance()const;
				int getVmCores()const;
				long getHoneypotCapacity()const;
				int getAssetLevel()const;
				std::string getInstanceId()const;
				long getCreateTime()const;
				int getSasScreen()const;
				bool getIsSasOpening()const;
				int getLogCapacity()const;
				int getFlag()const;
				long getReleaseTime()const;
				int getIsTrialVersion()const;
				int getAppWhiteList()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool isPaidUser_;
				long imageScanCapacity_;
				long appWhiteListAuthCount_;
				int logTime_;
				int sasLog_;
				int version_;
				int avdsFlag_;
				long webLockAuthCount_;
				long slsCapacity_;
				long lastTrailEndTime_;
				int userDefinedAlarms_;
				int webLock_;
				bool isOverBalance_;
				int vmCores_;
				long honeypotCapacity_;
				int assetLevel_;
				std::string instanceId_;
				long createTime_;
				int sasScreen_;
				bool isSasOpening_;
				int logCapacity_;
				int flag_;
				long releaseTime_;
				int isTrialVersion_;
				int appWhiteList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEVERSIONCONFIGRESULT_H_