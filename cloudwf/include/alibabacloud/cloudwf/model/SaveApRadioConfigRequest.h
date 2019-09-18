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

#ifndef ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOCONFIGREQUEST_H_
#define ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cloudwf/CloudwfExport.h>

namespace AlibabaCloud
{
	namespace Cloudwf
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDWF_EXPORT SaveApRadioConfigRequest : public RpcServiceRequest
			{

			public:
				SaveApRadioConfigRequest();
				~SaveApRadioConfigRequest();

				int getFrag()const;
				void setFrag(int frag);
				int getMinrate()const;
				void setMinrate(int minrate);
				int getMcastRate()const;
				void setMcastRate(int mcastRate);
				int getChannel()const;
				void setChannel(int channel);
				std::string getHwmode()const;
				void setHwmode(const std::string& hwmode);
				std::string getMac()const;
				void setMac(const std::string& mac);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				int getBcastRate()const;
				void setBcastRate(int bcastRate);
				int getDisabled()const;
				void setDisabled(int disabled);
				long getId()const;
				void setId(long id);
				int getRadioIndex()const;
				void setRadioIndex(int radioIndex);
				std::string getRequireMode()const;
				void setRequireMode(const std::string& requireMode);
				std::string getHtmode()const;
				void setHtmode(const std::string& htmode);
				int getProbereq()const;
				void setProbereq(int probereq);
				int getShortgi()const;
				void setShortgi(int shortgi);
				int getUapsd()const;
				void setUapsd(int uapsd);
				int getBeaconInt()const;
				void setBeaconInt(int beaconInt);
				int getRts()const;
				void setRts(int rts);
				int getTxpower()const;
				void setTxpower(int txpower);
				int getNoscan()const;
				void setNoscan(int noscan);
				int getInstantlyEffective()const;
				void setInstantlyEffective(int instantlyEffective);

            private:
				int frag_;
				int minrate_;
				int mcastRate_;
				int channel_;
				std::string hwmode_;
				std::string mac_;
				std::string accessKeyId_;
				int bcastRate_;
				int disabled_;
				long id_;
				int radioIndex_;
				std::string requireMode_;
				std::string htmode_;
				int probereq_;
				int shortgi_;
				int uapsd_;
				int beaconInt_;
				int rts_;
				int txpower_;
				int noscan_;
				int instantlyEffective_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDWF_MODEL_SAVEAPRADIOCONFIGREQUEST_H_