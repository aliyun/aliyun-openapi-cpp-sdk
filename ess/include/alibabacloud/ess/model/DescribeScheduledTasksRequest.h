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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSREQUEST_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScheduledTasksRequest : public RpcServiceRequest
			{

			public:
				DescribeScheduledTasksRequest();
				~DescribeScheduledTasksRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getScheduledAction2()const;
				void setScheduledAction2(const std::string& scheduledAction2);
				std::string getScheduledAction1()const;
				void setScheduledAction1(const std::string& scheduledAction1);
				std::string getScheduledAction6()const;
				void setScheduledAction6(const std::string& scheduledAction6);
				std::string getScheduledAction5()const;
				void setScheduledAction5(const std::string& scheduledAction5);
				std::string getScheduledAction4()const;
				void setScheduledAction4(const std::string& scheduledAction4);
				std::string getScheduledAction3()const;
				void setScheduledAction3(const std::string& scheduledAction3);
				std::string getScheduledAction9()const;
				void setScheduledAction9(const std::string& scheduledAction9);
				std::string getScheduledAction8()const;
				void setScheduledAction8(const std::string& scheduledAction8);
				std::string getScheduledAction7()const;
				void setScheduledAction7(const std::string& scheduledAction7);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getScheduledTaskName20()const;
				void setScheduledTaskName20(const std::string& scheduledTaskName20);
				std::string getScheduledTaskName19()const;
				void setScheduledTaskName19(const std::string& scheduledTaskName19);
				std::string getScheduledTaskName18()const;
				void setScheduledTaskName18(const std::string& scheduledTaskName18);
				std::string getScheduledTaskId20()const;
				void setScheduledTaskId20(const std::string& scheduledTaskId20);
				std::string getScheduledTaskName13()const;
				void setScheduledTaskName13(const std::string& scheduledTaskName13);
				std::string getScheduledTaskName12()const;
				void setScheduledTaskName12(const std::string& scheduledTaskName12);
				std::string getScheduledTaskName11()const;
				void setScheduledTaskName11(const std::string& scheduledTaskName11);
				std::string getScheduledTaskName10()const;
				void setScheduledTaskName10(const std::string& scheduledTaskName10);
				std::string getScheduledTaskName17()const;
				void setScheduledTaskName17(const std::string& scheduledTaskName17);
				std::string getScheduledTaskName16()const;
				void setScheduledTaskName16(const std::string& scheduledTaskName16);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getScheduledTaskName15()const;
				void setScheduledTaskName15(const std::string& scheduledTaskName15);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getScheduledTaskName14()const;
				void setScheduledTaskName14(const std::string& scheduledTaskName14);
				std::string getScheduledTaskId2()const;
				void setScheduledTaskId2(const std::string& scheduledTaskId2);
				std::string getScheduledTaskId1()const;
				void setScheduledTaskId1(const std::string& scheduledTaskId1);
				std::string getScheduledTaskId4()const;
				void setScheduledTaskId4(const std::string& scheduledTaskId4);
				std::string getScheduledTaskId18()const;
				void setScheduledTaskId18(const std::string& scheduledTaskId18);
				std::string getScheduledTaskId3()const;
				void setScheduledTaskId3(const std::string& scheduledTaskId3);
				std::string getScheduledTaskId19()const;
				void setScheduledTaskId19(const std::string& scheduledTaskId19);
				std::string getScheduledTaskId6()const;
				void setScheduledTaskId6(const std::string& scheduledTaskId6);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getScheduledTaskId5()const;
				void setScheduledTaskId5(const std::string& scheduledTaskId5);
				std::string getScheduledTaskId8()const;
				void setScheduledTaskId8(const std::string& scheduledTaskId8);
				std::string getScheduledTaskName9()const;
				void setScheduledTaskName9(const std::string& scheduledTaskName9);
				std::string getScheduledAction20()const;
				void setScheduledAction20(const std::string& scheduledAction20);
				std::string getScheduledTaskId7()const;
				void setScheduledTaskId7(const std::string& scheduledTaskId7);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getScheduledTaskId12()const;
				void setScheduledTaskId12(const std::string& scheduledTaskId12);
				std::string getScheduledTaskName7()const;
				void setScheduledTaskName7(const std::string& scheduledTaskName7);
				std::string getScheduledTaskId9()const;
				void setScheduledTaskId9(const std::string& scheduledTaskId9);
				std::string getScheduledTaskId13()const;
				void setScheduledTaskId13(const std::string& scheduledTaskId13);
				std::string getScheduledTaskName8()const;
				void setScheduledTaskName8(const std::string& scheduledTaskName8);
				std::string getScheduledTaskId10()const;
				void setScheduledTaskId10(const std::string& scheduledTaskId10);
				std::string getScheduledTaskName5()const;
				void setScheduledTaskName5(const std::string& scheduledTaskName5);
				std::string getScheduledTaskId11()const;
				void setScheduledTaskId11(const std::string& scheduledTaskId11);
				std::string getScheduledTaskName6()const;
				void setScheduledTaskName6(const std::string& scheduledTaskName6);
				std::string getScheduledTaskId16()const;
				void setScheduledTaskId16(const std::string& scheduledTaskId16);
				std::string getScheduledTaskName3()const;
				void setScheduledTaskName3(const std::string& scheduledTaskName3);
				std::string getScheduledTaskId17()const;
				void setScheduledTaskId17(const std::string& scheduledTaskId17);
				std::string getScheduledTaskName4()const;
				void setScheduledTaskName4(const std::string& scheduledTaskName4);
				std::string getScheduledTaskId14()const;
				void setScheduledTaskId14(const std::string& scheduledTaskId14);
				std::string getScheduledTaskName1()const;
				void setScheduledTaskName1(const std::string& scheduledTaskName1);
				std::string getScheduledTaskId15()const;
				void setScheduledTaskId15(const std::string& scheduledTaskId15);
				std::string getScheduledTaskName2()const;
				void setScheduledTaskName2(const std::string& scheduledTaskName2);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getScheduledAction18()const;
				void setScheduledAction18(const std::string& scheduledAction18);
				std::string getScheduledAction19()const;
				void setScheduledAction19(const std::string& scheduledAction19);
				std::string getScheduledAction16()const;
				void setScheduledAction16(const std::string& scheduledAction16);
				std::string getScheduledAction17()const;
				void setScheduledAction17(const std::string& scheduledAction17);
				std::string getScheduledAction14()const;
				void setScheduledAction14(const std::string& scheduledAction14);
				std::string getScheduledAction15()const;
				void setScheduledAction15(const std::string& scheduledAction15);
				std::string getScheduledAction12()const;
				void setScheduledAction12(const std::string& scheduledAction12);
				std::string getScheduledAction13()const;
				void setScheduledAction13(const std::string& scheduledAction13);
				std::string getScheduledAction10()const;
				void setScheduledAction10(const std::string& scheduledAction10);
				std::string getScheduledAction11()const;
				void setScheduledAction11(const std::string& scheduledAction11);

            private:
				long resourceOwnerId_;
				std::string scheduledAction2_;
				std::string scheduledAction1_;
				std::string scheduledAction6_;
				std::string scheduledAction5_;
				std::string scheduledAction4_;
				std::string scheduledAction3_;
				std::string scheduledAction9_;
				std::string scheduledAction8_;
				std::string scheduledAction7_;
				long ownerId_;
				std::string scheduledTaskName20_;
				std::string scheduledTaskName19_;
				std::string scheduledTaskName18_;
				std::string scheduledTaskId20_;
				std::string scheduledTaskName13_;
				std::string scheduledTaskName12_;
				std::string scheduledTaskName11_;
				std::string scheduledTaskName10_;
				std::string scheduledTaskName17_;
				std::string scheduledTaskName16_;
				int pageNumber_;
				std::string scheduledTaskName15_;
				std::string accessKeyId_;
				std::string scheduledTaskName14_;
				std::string scheduledTaskId2_;
				std::string scheduledTaskId1_;
				std::string scheduledTaskId4_;
				std::string scheduledTaskId18_;
				std::string scheduledTaskId3_;
				std::string scheduledTaskId19_;
				std::string scheduledTaskId6_;
				std::string regionId_;
				std::string scheduledTaskId5_;
				std::string scheduledTaskId8_;
				std::string scheduledTaskName9_;
				std::string scheduledAction20_;
				std::string scheduledTaskId7_;
				int pageSize_;
				std::string scheduledTaskId12_;
				std::string scheduledTaskName7_;
				std::string scheduledTaskId9_;
				std::string scheduledTaskId13_;
				std::string scheduledTaskName8_;
				std::string scheduledTaskId10_;
				std::string scheduledTaskName5_;
				std::string scheduledTaskId11_;
				std::string scheduledTaskName6_;
				std::string scheduledTaskId16_;
				std::string scheduledTaskName3_;
				std::string scheduledTaskId17_;
				std::string scheduledTaskName4_;
				std::string scheduledTaskId14_;
				std::string scheduledTaskName1_;
				std::string scheduledTaskId15_;
				std::string scheduledTaskName2_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string scheduledAction18_;
				std::string scheduledAction19_;
				std::string scheduledAction16_;
				std::string scheduledAction17_;
				std::string scheduledAction14_;
				std::string scheduledAction15_;
				std::string scheduledAction12_;
				std::string scheduledAction13_;
				std::string scheduledAction10_;
				std::string scheduledAction11_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCHEDULEDTASKSREQUEST_H_