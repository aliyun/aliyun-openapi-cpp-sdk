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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSINGROUPRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSINGROUPRESULT_H_

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
			class ALIBABACLOUD_ECD_EXPORT DescribeDesktopsInGroupResult : public ServiceResult
			{
			public:
				struct PaidDesktop
				{
					std::string fotaVersion;
					int systemDiskSize;
					std::string desktopName;
					std::string desktopId;
					std::vector<std::string> endUserIds;
					std::vector<std::string> managementFlags;
					std::string desktopStatus;
					std::string resetTime;
					std::vector<std::string> endUserNames;
					std::string gpuDriverVersion;
					std::string diskType;
					std::string imageName;
					std::string endUserName;
					std::string endUserId;
					std::string osType;
					std::string primaryEniIp;
					std::string protocolType;
					std::string imageId;
					std::string memberEniIp;
					std::string connectionStatus;
					std::string managementFlag;
				};
				struct PostPaidDesktop
				{
					std::string fotaVersion;
					int systemDiskSize;
					std::string createTime;
					std::string desktopName;
					std::string desktopId;
					std::string desktopStatus;
					std::vector<std::string> endUserNames2;
					std::string resetTime;
					std::string gpuDriverVersion;
					std::string diskType;
					std::string imageName;
					std::string endUserName;
					std::string endUserId;
					std::string releaseTime;
					std::string osType;
					std::string primaryEniIp;
					std::string protocolType;
					std::string createDuration;
					std::string imageId;
					std::string memberEniIp;
					std::vector<std::string> managementFlags3;
					std::string connectionStatus;
					std::string managementFlag;
					std::vector<std::string> endUserIds1;
				};


				DescribeDesktopsInGroupResult();
				explicit DescribeDesktopsInGroupResult(const std::string &payload);
				~DescribeDesktopsInGroupResult();
				std::vector<PaidDesktop> getPaidDesktops()const;
				int getStopedPrePaidDesktopsCount()const;
				int getPaidDesktopsCount()const;
				std::string getNextToken()const;
				int getPostPaidDesktopsTotalAmount()const;
				int getPostPaidDesktopsCount()const;
				int getRunningPrePaidDesktopsCount()const;
				std::vector<PostPaidDesktop> getPostPaidDesktops()const;
				int getOnlinePrePaidDesktopsCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<PaidDesktop> paidDesktops_;
				int stopedPrePaidDesktopsCount_;
				int paidDesktopsCount_;
				std::string nextToken_;
				int postPaidDesktopsTotalAmount_;
				int postPaidDesktopsCount_;
				int runningPrePaidDesktopsCount_;
				std::vector<PostPaidDesktop> postPaidDesktops_;
				int onlinePrePaidDesktopsCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEDESKTOPSINGROUPRESULT_H_